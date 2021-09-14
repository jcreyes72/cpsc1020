#include<fstream>
#include<iostream>
#include<string>
#include"pixelArt.h"

using namespace std;

void pixelArt::readArts(string fileName) {

    std::ifstream myFile;

    myFile.open(fileName);

        //Error message
        if (myFile.fail()){
            std::cerr << "File does not exist" << std::endl;
            exit(1);
        }



    char storedLetters; //This will temporarily hold the characters to be converted to integers
    int letterToNum;    //This will take the stored char and hold it as an int



//This for loop reads in the characters into "storedLetters", converts those characters into
//integers, "letterToNum", then pushes those values into the innerPixels vector, after exiting
//the first loop, the outside loop pushes those vectors into our outside 2D vector, pixels
        for (int i = 0; i < h; i++){
            vector<int> innerPixels;
                for (int j = 0; j < w; j++){
                    myFile >> storedLetters;
                    letterToNum = storedLetters - '0';
                    innerPixels.push_back(letterToNum);
                }
            pixels.push_back(innerPixels);
        }
}

pixelArt::pixelArt(int iw, int ih){
    w = iw;
    h = ih;
}

int pixelArt::getPixel(int i, int j) {
    return pixels[i][j];
}

int pixelArt::getW(){
    return w;
}

int pixelArt::getH(){
    return h;
}


pixelArt pixelArt::operator + (int num){

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            pixels[i][j] = pixels[i][j] + num;
        }
    }

return *this;
}

pixelArt pixelArt::operator - (int num){

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            pixels[i][j] = pixels[i][j] - num;
        }
    }

return *this;
}

pixelArt pixelArt::operator + (const pixelArt& pa){

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            pixels[i][j] = pixels[i][j] + pa.pixels[i][j];
        }
    }


return *this;
}

ostream& operator<<(ostream& os, const pixelArt& pa){

    int h = 16;
    int w = 70;

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if ((pa.pixels[i][j] == 9)){
                std::cout << " ";
            }
            else{
            std::cout << pa.pixels[i][j];
            }
        }
        std::cout << "\n";
    }

}
