using namespace std;

class PlayerData{
    public:
        PlayerData(int, int, int);
        void returnValue(float);

        int getK();
        void setK(int);
        int getRa();
        void setRa(int);
        int getRb();
        void setRb(int);

    private:
        int K;
        int Ra;
        int Rb;
};
