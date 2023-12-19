#include <iostream>
#include "numbers.h"
#include "chrono"
#include "vector"
#include "thread"
#include "windows.h"

using namespace std;

vector<vector<char>> one = ONE();
vector<vector<char>> two = TWO();
vector<vector<char>> three = THREE();
vector<vector<char>> four = FOUR();
vector<vector<char>> five = FIVE();
vector<vector<char>> six = SIX();
vector<vector<char>> seven = SEVEN();
vector<vector<char>> eight = EIGHT();
vector<vector<char>> nine = NINE();
vector<vector<char>> zero = ZERO();
vector<vector<char>> dots = DOUBLED();


void print_time(vector<vector<char>>& hour1,vector<vector<char>>& hour2,vector<vector<char>>& min1,vector<vector<char>>& min2,vector<vector<char>>& sec1,vector<vector<char>>& sec2){
    system("cls");
    for(int i = 0;i < 6;i++){
        for(int j = 0;j < 4;j++){
            cout<<hour1[i][j];
        }
        cout<<"\t";
        for(int j = 0;j < 4;j++){
            cout<<hour2[i][j];
        }

        cout<<"\t";
        for(int j = 0;j < 4;j++){
            cout<<dots[i][j];
        }
        cout<<"\t";

        for(int j = 0;j < 4;j++){
            cout<<min1[i][j];
        }
        cout<<"\t";
        for(int j = 0;j < 4;j++){
            cout<<min2[i][j];
        }

        cout<<"\t";
        for(int j = 0;j < 4;j++){
            cout<<dots[i][j];
        }
        cout<<"\t";

        for(int j = 0;j < 4;j++){
            cout<<sec1[i][j];
        }
        cout<<"\t";
        for(int j = 0;j < 4;j++){
            cout<<sec2[i][j];
        }
        cout<<"\n";

    }
}

int string_to_int(string c){
    int num = 0;
    for(int i = 0;i < c.size();i++){
        num = num*10 + (c[i] - '0');
    }
    return num;
}

void time_to_int(string t,int &hour,int &min,int &sec){
    int i = 0,spaces = 0;
    for(;i < t.size();i++){
        if(t[i] == ' '){
            i++;
            spaces++;
        }
        if(spaces == 3){
            break;
        }
    }
    string a;
    a += t[i];
    a += t[i+1];
    hour = string_to_int(a);
    i+= 3;
    a = "";
    a += t[i];
    a += t[i+1];
    min = string_to_int(a);
    i+= 3;
    a = "";
    a += t[i];
    a += t[i+1];
    sec = string_to_int(a);
}

vector<vector<char>> itob(int num){
    switch (num) {
        case 0:
            return zero;
        case 1:
            return one;
        case 2:
            return two;
        case 3:
            return three;
        case 4:
            return four;
        case 5:
            return five;
        case 6:
            return six;
        case 7:
            return seven;
        case 8:
            return eight;
        case 9:
            return nine;
        default:
            return zero;
    }
}

void int_to_blocks(int& hour,int& min,int& sec){
    vector<vector<char>> hour1;
    vector<vector<char>> hour2;
    vector<vector<char>> min1;
    vector<vector<char>> min2;
    vector<vector<char>> sec1;
    vector<vector<char>> sec2;
    hour2 = itob(hour%10);
    hour1 = itob(hour/10);

    min2 = itob(min%10);
    min1 = itob(min/10);

    sec2 = itob(sec%10);
    sec1 = itob(sec/10);
    print_time(hour1,hour2,min1,min2,sec1,sec2);
}

void time(){
    while(true){
        this_thread::sleep_for(1000ms);
        auto start = std::chrono::system_clock::now();
        auto end = std::chrono::system_clock::now();
        std::time_t end_time = std::chrono::system_clock::to_time_t(end);
        string c = ctime(&end_time);
        int hour,min,sec;
        cout<<ctime(&end_time);
        time_to_int(c,hour,min,sec);
        int_to_blocks(hour,min,sec);
    }
}

int main() {

    time();
    return 0;
}
