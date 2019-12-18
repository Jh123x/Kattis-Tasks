#include <iostream>
#include <string>

using namespace std;

int main() {
  int no_of_hand, points = 0;
  char trump, no, suit;
  string card;
  
  cin >> no_of_hand >> trump;

  for(int i = 0; i < no_of_hand * 4; i++){
    cin >> card;
    no = card[0];
    suit = card[1];
    if(suit != trump){
      switch(no){
        case 'A': 
          points += 11;
          break;
        case 'K':
          points += 4;
          break;
        case 'Q':
          points += 3;
          break;
        case 'J':
          points += 2;
          break;
        case 'T':
          points += 10;
          break;
        default:
          points += 0;
          break;
      }

    }else{
      switch(no){
        case 'A': 
          points += 11;
          break;
        case 'K':
          points += 4;
          break;
        case 'Q':
          points += 3;
          break;
        case 'J':
          points += 20;
          break;
        case 'T':
          points += 10;
          break;
        case '9':
          points += 14;
          break;
        default:
          points += 0;
          break;
      }

    }
  }
  cout << points;
}
