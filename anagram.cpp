#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<fstream>

using namespace std;

const int ALPHABET2PRIMES[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};

map <unsigned long long int, vector<string> > hashMap;

ifstream file;

string hash( string str ) {
    string hash = NULL;
    char[25] sortStr;
    strcpy(sortc)
    for(i=0;i<str.si)
    return hash;
}

void printAnagrams() {
    for ( std::map<unsigned long long int, vector<string> >::const_iterator i = hashMap.begin(); i != hashMap.end(); ++i) {
        vector<string> wordList = i->second;
        if ( wordList.size() > 1 ) {
         for ( int j = 0; j < wordList.size(); j++ ) {
                cout << wordList[j] << "\t";
            }
            cout << endl;
        }
    }
}

void processDictionary( string filePath )
{
    file.open( filePath.c_str() );
    string word;
    getline( file, word );

    while( !word.empty() )
    {
        string hashValue = hash( word );

        if ( hashMap.find( hashValue ) == hashMap.end() ) {
        vector<string> wordList ( 1, word );
        hashMap.insert( std::pair<unsigned long long int, vector<string> >( hashValue, wordList) );
        }
        else {
            hashMap[ hashValue ].push_back( word );
        }

        getline( file, word );
    }

    printAnagrams();
}

int main() {
    processDictionary( "sowpods.txt" );
}
