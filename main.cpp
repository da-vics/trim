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

        break;
    }

}

num_space = ((strlen(ptr)+num_space) - num_space)+1;
ptr[num_space] = '\0';

}

void trim(string *ptr){

uint64_t num_space = 0;

for(uint64_t i = 0 ; i<ptr->length()+1; ++i){

    if((*ptr)[i] == ' '){
            ++num_space;

            uint64_t te = i;
            uint64_t ch = i;
                    //ptr->length()+1

        while(ch<ptr->length()+1){

                if((*ptr)[ch+1] != ' '){

            (*ptr)[te] = (*ptr)[ch+1];
                ++te;
                }

                    else{
                        ++num_space;
                    }
                ++ch;
        }  ///

            break;
    }

}

for(int i = (ptr->length() - num_space); i<ptr->length(); ++i){
    (*ptr)[i] = NULL;
}

}

int main()
{

/// c string Test.....
char test[] = "c++ is the            best";

trim(test);
cout<<test<<endl;

///string Test...........
string test2 = "c++ is the            best";
trim(&test2);
cout<<test2<<endl;
    
}
