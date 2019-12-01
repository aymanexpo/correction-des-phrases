// la declaration des classe
#if !defined Aymane
#define Aymane
class aymane
{
    public:
        aymane(char*);// constructeur
        void string(char *);
        void ajoutSpace(char*);
        void deleteSpace(char*);
        void toMaj(char*);
        void toMin(char*);
        void correctPonctuation(char*);
    private:
        char phrase; 
};
#endif