#include<iostream>

using namespace std;

class ArrayX
{
        private:
                int *Arr;
                int iSize;

        public:
                ArrayX(int iValue)
                {
                        this -> iSize = iValue;
                        Arr = new int[iSize];
                }

                ~ArrayX()
                {
                        delete []Arr;
                }

                void Accept()
                {
                        int iCnt = 0;
                        cout<<"Enter the elements"<<endl;
                        for(iCnt = 0; iCnt < iSize; iCnt++)
                        {
                                cin>>Arr[iCnt];
                        }
                }

                void Display()
                {
                        int iCnt = 0;
                        cout<<"Elements of array : "<<endl;
                        for(iCnt = 0; iCnt < iSize; iCnt++)
                        {
                                cout<<Arr[iCnt]<<endl;
                        }
                }

                int Summation()
                {
                        int iSum = 0;
                        for(int iCnt = 0; iCnt < iSize; iCnt++)
                        {
                                iSum += Arr[iCnt];
                        }

                        return iSum;
                }

};

int main()
{
        int iRet = 0;
        int iSize = 0;

        cout<<"Enter size of array : "<<endl;
        cin>>iSize;

        ArrayX obj1(iSize);

        obj1.Accept();
        obj1.Display();

        iRet = obj1.Summation();

        cout<<"Addition is : "<<iRet<<endl;

        return 0;
}
