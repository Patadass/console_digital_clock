//
// Created by Administrator on 12/19/2023.
//

#include <vector>
#include <iostream>
#include <numbers>

#define DB char(220) //char █


std::vector<std::vector<char>> ZERO(){
    std::vector<std::vector<char>>v;
    v = {
            {' ',DB,DB,' '},
            {DB,' ',' ',DB},
            {DB,' ',' ',DB},
            {DB,' ',' ',DB},
            {DB,' ',' ',DB},
            {' ',DB,DB,' '}
    };
    return v;
}

std::vector<std::vector<char>> ONE(){
    std::vector<std::vector<char>>v;
    v = {
            {' ',' ',DB,DB},
            {' ',DB,' ',DB},
            {DB,' ',' ',DB},
            {' ',' ',' ',DB},
            {' ',' ',' ',DB},
            {' ',' ',' ',DB}
    };
    return v;
}
std::vector<std::vector<char>> TWO(){
    std::vector<std::vector<char>>v;
    v = {
            {' ',DB,DB,' '},
            {DB,' ',' ',DB},
            {DB,' ',' ',DB},
            {' ',' ',DB,' '},
            {' ',DB,' ',' '},
            {DB,DB,DB,DB}
    };
    return v;
}
std::vector<std::vector<char>> THREE(){
    std::vector<std::vector<char>>v;
    v = {
            {DB,DB,DB,' '},
            {' ',' ',' ',DB},
            {' ',' ',DB,' '},
            {' ',' ',DB,' '},
            {' ',' ',' ',DB},
            {DB,DB,DB,' '}
    };
    return v;
}
std::vector<std::vector<char>> FOUR(){
    std::vector<std::vector<char>>v;
    v = {
            {' ',' ',DB,DB},
            {' ',DB,' ',DB},
            {DB,' ',' ',DB},
            {DB,DB,DB,DB},
            {' ',' ',' ',DB},
            {' ',' ',' ',DB}
    };
    return v;
}
std::vector<std::vector<char>> FIVE(){
    std::vector<std::vector<char>>v;
    v = {
            {DB,DB,DB,DB},
            {DB,' ',' ',' '},
            {DB,DB,DB,' '},
            {' ',' ',' ',DB},
            {' ',' ',' ',DB},
            {DB,DB,DB,' '}
    };
    return v;
}
std::vector<std::vector<char>> SIX(){
    std::vector<std::vector<char>>v;
    v = {
            {' ',DB,DB,' '},
            {DB,' ',' ',' '},
            {DB,DB,DB,' '},
            {DB,' ',' ',DB},
            {DB,' ',' ',DB},
            {' ',DB,DB,' '}
    };
    return v;
}
std::vector<std::vector<char>> SEVEN(){
    std::vector<std::vector<char>>v;
    v = {
            {DB,DB,DB,DB},
            {' ',' ',' ',DB},
            {' ',' ',DB,' '},
            {' ',DB,' ',' '},
            {' ',DB,' ',' '},
            {' ',DB,' ',' '}
    };
    return v;
}
std::vector<std::vector<char>> EIGHT(){
    std::vector<std::vector<char>>v;
    v = {
            {' ',DB,DB,' '},
            {DB,' ',' ',DB},
            {DB,' ',' ',DB},
            {' ',DB,DB,' '},
            {DB,' ',' ',DB},
            {' ',DB,DB,' '}
    };
    return v;
}
std::vector<std::vector<char>> NINE(){
    std::vector<std::vector<char>>v;
    v = {
            {' ',DB,DB,' '},
            {DB,' ',' ',DB},
            {' ',DB,DB,DB},
            {' ',' ',DB,' '},
            {' ',DB,' ',' '},
            {DB,' ',' ',' '}
    };
    return v;
}
std::vector<std::vector<char>> DOUBLED(){
    std::vector<std::vector<char>>v;
    v = {
            {' ',' ',' ',' '},
            {' ',DB,DB,' '},
            {' ',' ',' ',' '},
            {' ',' ',' ',' '},
            {' ',DB,DB,' '},
            {' ',' ',' ',' '}
    };
    return v;
}