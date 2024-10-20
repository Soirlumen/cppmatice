#ifndef HLAVIČKA_H
#define HLAVIČKA_H

#include <iostream>
#include <vector>

template <typename T>
void piš(T t) 
{
    std::cout << t;
}

template<typename T, typename... Args>
void piš(T t, Args... args)
{
    std::cout << t;

    piš(args...) ;
}


/* 
template <typename T>
class Mať{
private:
    std::vector<std::vector<T>> maťa;
public:
    template <typename T>
    Mať <T>::Mať(){
        std::cout<<"kok";
        maťa={};
}

    template <typename T>
    Mať <T>::Mať(int x, int y){
        std::cout<<"koko";
        for (int i=0;i<x;i++){
            for (int j;j<y;y++)
            {
                maťa[i][j]=0;
            }
        }
    }


}; */


#endif