#include "hlavička.h"

using namespace std;

vector<vector<int>> nulova_matice(int počet_řř,int počet_ss){
    vector<vector<int>> výsledek;
    vector<int> pom;
    for (int i=0;i<počet_ss;i++)
    {
    pom.push_back(0);
    }
    for(int j=0;j<počet_řř;j++)
    {
        výsledek.push_back(pom);

        //vypiš_matici(výsledek);
    }
    
return výsledek;
}

void vypiš_matici(vector<vector<int>> matice){
    for (int i=0;i<matice.size();i++){
    cout<<"(";
        for (int j=0;j<matice[i].size();j++)
        {
            cout<<matice[i][j]<<", ";
        }
    cout<<")"<<endl;
    }
}

vector<vector<int>> součin_matic(vector<vector<int>> vec,vector<vector<int>> mat){
    vector<vector<int>> C=nulova_matice(vec.size(),mat[0].size());
 
    for (int k=0;k<vec.size();k++){              //vec.size()je počet řádků 1.matice, abychom mohli ve výsledné matici po řádcích iterovat
        for (int j=0;j<mat[0].size();j++){          //mat[0].size() je počet sloupců 2. matice, je tam 0, jelikož matice by měla mít aspoň 1 sloupec, v jednom řádku iterujeme po sloupečcích
            for (int i=0;i<mat.size();i++){         //mat.size() by se měla rovnat vec[0].size()...(šlo by to tedy zaměnit), sčítáme takto násobené řádek/sloupec dvou matic :>
                C[k][j]+=(vec[k][i]*mat[i][j]);
            }
        } 
    }
    return C;                    
}

int main()
{
vector<vector<int>> vec{ {4,1,0},
                         {0,1,0},
                         {0,0,1},
                         {1,1,5} }; 

vector<vector<int>> mat{ {4,1,0,},
                         {0,1,0},
                         {0,0,1}};                                            


vector<vector<int>> C=součin_matic(vec,mat);
vypiš_matici(C);
 
}



//////////////////////////////////////////////////////////////////////////////////////////////////
















//cout<<vec[2][1]<<endl; 

/* for (int i=0;i<vec.size();i++){
    cout<<"(";

    for (int j=0;j<vec[i].size();j++){
        cout<<vec[i][j]<<", ("<<i<<")";
    }
    cout<<")"<<endl;
}
 */

//cout<<mat.size()<<endl;   to je 3, mat[libovolny sloupec, treba 0 ktery má furt].size() bude 2

/* int prvni_prvekC=0;

for (int i=0;i<mat.size();i++){
    prvni_prvekC+=(vec[0][i]*mat[i][0]);
    cout<<i<<"aaa"<<endl;
} */
//cout<<prvni_prvekC;

/*  vector<int> prvni_radekC={0,0};
for (int j=0;j<mat[0].size();j++){
    for (int i=0;i<mat.size();i++){
        prvni_radekC[j]+=(vec[0][i]*mat[i][j]);
        cout<<i<<"aaa"<<endl;
}
} 
cout<<prvni_radekC[0]<<" "<<prvni_radekC[1];
*/
        
/* 

int počet_ř=5;
int počet_s=4;
vector<vector<int>> k(počet_ř,vector<int>(počet_s));
  
vector<int> pom;
for (int i=0;i<počet_s;i++){
    pom.push_back(0);
    for(int j=0;j<počet_ř;j++){
        k[j].push_back(pom[i]);
    }
}

 */

   
/* vector<vector<int>>C={{0,0},
                      {0,0}}; */