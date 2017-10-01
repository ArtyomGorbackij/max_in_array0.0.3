#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	bool failure = false;
	int l,max, max2, numbers[10], numb[10];
	for (string string; getline(cin, string); ) {
		istringstream stream(string);
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> numbers[i])) {
				failure = true;
				break;
			}
		}
		break;
	}
	for (string string2; getline(cin, string2); ) {
	  istringstream stream(string2);
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> numb[i])) {
				failure = true;
				break;
			}
		}
		break;
	}
      if( !failure ) {
            max2=numb[0];
            max=numbers[0];
            for( int j = 1; j < 10; j++ ) {
                if(max2<numb[j]){
                    max2=numb[j];
                    l=j;
                    }
            }
            for( int i = 1; i <= l; i++ ) {
                if(max<numbers[i]){
                    max=numbers[i];
                    }
            }
            cout << max+max2;
        }
        else {
           cout << "An error has occured while reading numbers from line" << endl;
        }
      system ("pause");
      return 0;
  }
