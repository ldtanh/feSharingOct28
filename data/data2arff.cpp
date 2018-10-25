#include "bits/stdc++.h"

using namespace std;

int main(){
	freopen("zoo.data", "r", stdin);
	freopen("zoo2.arff", "w", stdout);
	printf("@relation zoo\n\n");
	printf("@attribute name {aardvark,antelope,bass,bear,boar,buffalo,calf,carp,catfish,cavy,cheetah,chicken,chub,clam,crab,crayfish,crow,deer,dogfish,dolphin,dove,duck,elephant,flamingo,flea,frog,fruitbat,giraffe,girl,gnat,goat,gorilla,gull,haddock,hamster,hare,hawk,herring,honeybee,housefly,kiwi,ladybird,lark,leopard,lion,lobster,lynx,mink,mole,mongoose,moth,newt,octopus,opossum,oryx,ostrich,parakeet,penguin,pheasant,pike,piranha,pitviper,platypus,polecat,pony,porpoise,puma,pussycat,raccoon,reindeer,rhea,scorpion,seahorse,seal,sealion,seasnake,seawasp,skimmer,skua,slowworm,slug,sole,sparrow,squirrel,starfish,stingray,swan,termite,toad,tortoise,tuatara,tuna,vampire,vole,vulture,wallaby,wasp,wolf,worm,wren}\n");
	printf("@attribute hair {0, 1}\n");
	printf("@attribute feathers {0, 1}\n");
	printf("@attribute eggs {0, 1}\n");
	printf("@attribute milk {0, 1}\n");
	printf("@attribute airborne {0, 1}\n");
	printf("@attribute aquatic {0, 1}\n");
	printf("@attribute predator {0, 1}\n");
	printf("@attribute toothed {0, 1}\n");
	printf("@attribute backbone {0, 1}\n");
	printf("@attribute breathes {0, 1}\n");
	printf("@attribute venomous {0, 1}\n");
	printf("@attribute fins {0, 1}\n");
	printf("@attribute legs {0 ,2 ,4 , 5, 6, 8}\n");
	printf("@attribute tail {0, 1}\n");
	printf("@attribute domestic {0, 1}\n");
	printf("@attribute catsize {0, 1}\n");
	printf("@attribute type {mammal, bird, reptile, fish, amphibian, insect, invertebrate}\n\n");
	printf("@data\n");
	while (1){
		string st = "";
		cin >> st;
		int n = st.length() - 1;
		if (n < 0) return 0;
		switch (st[n]){
			case '1': 
				st[n] = 'm';
				st += "ammal";
				break;
			case '2': 
				st[n] = 'b';
				st += "ird";
				break;
			case '3': 
				st[n] = 'r';
				st += "eptile";
				break;
			case '4': 
				st[n] = 'f';
				st += "ish";
				break;
			case '5': 
				st[n] = 'a';
				st += "mphibian";
				break;
			case '6': 
				st[n] = 'i';
				st += "nsect";
				break;
			case '7': 
				st[n] = 'i';
				st += "nvertebrate";
				break;
		}
		cout << st << endl;
	}
	return 0;
}