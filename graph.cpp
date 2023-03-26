#include "graph.h"
#include <iostream>
#include<math.h>

using namespace std;



Graph::Graph(int ligne, int colonne){
     l = ligne;
     c = colonne;
     tab = new int[ligne * colonne];

     for (int i=0; i<ligne * colonne; i++){
          tab[i] = i;
     }
     
}


 int Graph::trouveIndex (int i, int j) const{
     if(i <l && j < c){
          return i*(c) + j ;
     }
}

int Graph::trouveLigne(int index) const{
     return (index/c);
}

int Graph::trouveColonne(int index) const{
     return (index % c);
} 

int Graph::voisinEst(int index) const{
     if ((index % c) < c-1)
     {
          return index+1;
     }
     else return -1;
}

int Graph::voisinOuest(int index) const{
     if ((index % c) > 0)
     {
          return index-1;
     }
     else return -1;
}

int Graph::voisinNord(int index) const{
     if (index >= c)
     {
          return index-c;
     }
     else return -1;
}

int Graph::voisinSud(int index) const{
     if (index + c < l*c -1)
     {
          return index+c;
     }
     else return -1;
} 

//sqrt(1 + sqr(h(i, j) − h(i − 1, j)))
float Graph::valuationEst(int index) const{
     if ( voisinEst(index) != -1) {return sqrt(1 + pow(tab[index] - tab[voisinEst(index)],2));}
     else return -1;
}

float Graph::valuationOuest(int index) const{
     if (voisinOuest(index) != -1) {return sqrt(1 + pow(tab[index] - tab[voisinOuest(index)],2));}
     else return -1;
}

float Graph::valuationNord(int index) const{
     if ( voisinNord(index) != -1) {return sqrt(1 + pow(tab[index] - tab[voisinNord(index)],2));}
     else return -1;
}

float Graph::valuationSud(int index) const{
     if ( voisinSud(index) != -1) {return sqrt(1 + pow(tab[index] - tab[voisinSud(index)],2));}
     else return -1;
}


int Graph::altitudeIndex(int index){
     return tab[index];
}

int Graph::altitude(int i, int j){
     return tab[i*c+j];
}


void Graph::setAltitude(float s, int index) {
     tab[index] = s;
}

void Graph::affichageGrille(){
     for(int i=0; i<l ; i++ ){
          for(int j =0; j<c;j++){
          cout<<"["<<tab[trouveIndex(i,j)]<<"]";
     }
     cout<<endl;
          }
}


Graph::~Graph(){

}