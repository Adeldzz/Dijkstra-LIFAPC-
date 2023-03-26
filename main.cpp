#include <iostream>
#include "graph.h"

using namespace std;

int main(){
Graph G = Graph(10,10);

int index = G.trouveIndex(2,2);
cout<<index<<endl;

cout<<"ligne :" <<G.trouveLigne(22)<<endl;
cout<<"colonne :" <<G.trouveColonne(22)<<endl;

cout << G.voisinNord(22)<<endl;

cout<<G.valuationOuest(9)<<endl;
//cout<<G.valuationOuest(11)<<endl;
//cout<<G.valuationSud(9)<<endl;

//cout<<G.altitude(2,2)<<endl;
cout<<G.altitudeIndex(22)<<endl;

/* G.setAltitude(5,22);
cout<<G.altitudeIndex(22)<<endl; */
G.affichageGrille();


return 0;    
}