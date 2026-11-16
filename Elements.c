#include <stdio.h>
struct Element;
void HMBPoints(struct Element* element1, struct Element* element2);
struct Element{
    double desity;
    int melting_point;
    int boiling_point;
    char ChemicalSymbol[2];
    int atomicNumber;
    int column;
    int period;
};
void HMBPoints(struct Element* element1, struct Element* element2){
    if (element1->melting_point > element2->melting_point){
        printf("%s has a higher melting point\n", element1->ChemicalSymbol);
    }else{
        printf("%s has a higher melting point\n", element2->ChemicalSymbol);
    }
    if (element1->boiling_point > element2->boiling_point){
        printf("%s has a higher boiling point\n", element1->ChemicalSymbol);
    }else{
        printf("%s has a higher boiling point\n", element2->ChemicalSymbol);
    }
}
int main(void){
    struct Element Iron = {7.874, 1538, 2861, "Fe", 26, 8, 4};
    struct Element Gold = {19.32, 1064, 2856, "Au", 79, 11, 6};
    HMBPoints(&Iron, &Gold);
    return 0;
}