#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;
int main(int argc, char **argv)
{
    int opt;
    string inputfilePath;
    while ((opt = getopt(argc,argv,"i:")) != EOF)
    switch (opt)
    {
        case 'i':
            cout << "value of c is"<< optarg <<endl ;
            inputfilePath = optarg;
            break;
        default:
            cout << endl;
            abort();
    }
    ifstream openFile(inputfilePath.data());
    if( openFile.is_open() ){
        string line;
        while(getline(openFile, line)){
            cout << line << endl;
        }
        openFile.close();
    }
    return 0;
}
