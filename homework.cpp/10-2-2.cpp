#include<iostream>
using namespace std;
int main(){
    int a,b,wood,steel,requiredWood,requiredSteel,i=1,choice(0),charge(0),potentialCharge(0);
    cin>>a>>b;
    cin>>wood>>steel;
    switch(i){
        case 1:{requiredWood=(a+b)*4;
        if(wood>=requiredWood) choice++;
        else charge=(requiredWood-wood)*5;  
        }  
        case 2:{requiredSteel=(a+b)*6;
        if(steel>=requiredSteel) choice++;
        else potentialCharge=(requiredSteel-steel)*3;
        charge=(charge<potentialCharge)?charge:potentialCharge; 
        }
        case 3:{requiredWood=4*a;
        requiredSteel=6*b;
        if(wood>=requiredWood && steel>=requiredSteel) choice++;
        else{
            if(wood<requiredWood&&steel>=requiredSteel)
            potentialCharge=(requiredWood-wood)*5;
            else if(wood>=requiredWood&&steel<requiredSteel)
            potentialCharge=(requiredSteel-steel)*3;
            else if(wood<requiredWood&&steel<requiredSteel)
            potentialCharge=(requiredWood-wood)*5+(requiredSteel-steel)*3;
        }
        charge=(charge<potentialCharge)?charge:potentialCharge;
    }
        case 4:{requiredWood=4*b;
        requiredSteel=6*a;
        if(wood>=requiredWood && steel>=requiredSteel) choice++;
        else{
            if(wood<requiredWood&&steel>=requiredSteel)
            potentialCharge=(requiredWood-wood)*5;
            else if(wood>=requiredWood&&steel<requiredSteel)
            potentialCharge=(requiredSteel-steel)*3;
            else if(wood<requiredWood&&steel<requiredSteel)
            potentialCharge=(requiredWood-wood)*5+(requiredSteel-steel)*3;
        }
        charge=(charge<potentialCharge)?charge:potentialCharge;break;
    }
}
      if(choice>0) cout<<choice<<endl;
      else cout<<0<<endl<<charge<<endl;
      return 0;  
         
    
}