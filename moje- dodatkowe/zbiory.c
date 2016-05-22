#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int key;
	struct node* parent;
	int rank;
}node;

node* MakeSet(int k){
	node *pom=malloc(sizeof(node));
	pom->key=k;
	pom->parent=pom;
	pom->rank=0;
	return pom;
}


node* FindSet(node** wezel){
	if((*wezel)!=(*wezel)->parent)
		(*wezel)->parent=FindSet(&(*wezel)->parent);
	return (*wezel)->parent;
}


void Union(node** pierwszy,node** drugi){
	*pierwszy=FindSet(&*pierwszy);
	*drugi=FindSet(&*drugi);
	if((*pierwszy)!=(*drugi)){
		if((*pierwszy)->rank>(*drugi)->rank)
			(*drugi)->parent=(*pierwszy);
		else{
			(*pierwszy)->parent=(*drugi);
			if((*pierwszy)->rank==(*drugi)->rank)
				(*drugi)->rank+=1;
		}
	}
}


int main(){
	node* testowy1=MakeSet(0);
	node* testowy2=MakeSet(1);
	node* testowy3=MakeSet(2);
	node* testowy4=MakeSet(3);
//	node* testowy5=MakeSet(4);
	Union(&testowy2,&testowy1);
	Union(&testowy2,&testowy3);
	node* pom=FindSet(&testowy3);
	printf("reprezentantem zbioru jest element %d\n",pom->key);
	Union(&testowy3,&testowy4);
	while(testowy4!=testowy4->parent){
		printf("Element o wartosci %d \n",testowy4->key);
		testowy4=testowy4->parent;
	}
/*
	for(i=1;i<11;i++){
		pom=MakeSet(i);
		Union(&pom,&testowy);
	}
	while(pom!=pom->parent){
		 printf("wezel o wartosci %d randze %d i adresie wlasnym %d oraz adresie rodzica %d\n",testowy->key,testowy->rank,testowy,testowy->parent);
		pom=pom->parent;
	}
*/
	//printf("wezel o wartosci %d randze %d i adresie wlasnym %d oraz adresie rodzica %d\n",testowy->key,testowy->rank,testowy,testowy->parent);
	//printf("Adres reprezentanta to:%d\n",findset(&testowy));
	return 0;
}
