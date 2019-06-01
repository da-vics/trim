#include <iostream>
#include<cstring>
#include<string>

using namespace std;

void trim(char *ptr){

uint64_t num_space = 0;

for(uint64_t i = 0 ; i<strlen(ptr); ++i){

    if(ptr[i] == ' '){
            ++num_space;

            uint64_t te = i;
            uint64_t ch = i;

        while(ch<strlen(ptr)){

                if(ptr[ch+1] != ' '){

            ptr[te] = ptr[ch+1];
                ++te;
                }

                    else{
                        ++num_space;
                    }
                ++ch;
        }  ///


    }

}

num_space = ((strlen(ptr)+num_space) - num_space)+1;
ptr[num_space] = '\0';

}


int main()
{

char vic[] = "c++ is the best";
/*
for(auto i : vic){
    cout<<i<<endl;
}
*/

trim(vic);
cout<<vic<<endl;

}
