#ifndef _SOMMET
#define _SOMMET

using namespace std;

class Graph{
    public :
        //Graph();
        Graph(int ligne, int colonne);
        ~Graph();

        int trouveIndex (int l, int c) const;
        int trouveLigne(int index) const;
        int trouveColonne(int index) const;

        int voisinEst(int index) const;
        int voisinOuest(int index) const;
        int voisinNord(int index) const;
        int voisinSud(int index) const;

        float valuationEst(int index) const;
        float valuationOuest(int index) const;
        float valuationNord(int index) const;
        float valuationSud(int index) const;

        int altitudeIndex(int index);
        int altitude(int i, int j);


        void setAltitude(float s, int index);

        void affichageGrille();


    private : 
        int l;
        int c;
        int *tab;

};




#endif