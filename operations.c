int inversion(int a) {
    //инверсия, НЕ (!)

    if (a == 0) return 1;
    else return 0;
}

int disjunction(int a, int b) {
    //дизъюнкиция, ИЛИ (|)

    if (a == 1 || b == 1) return 1;
    else return 0;
}

int conjunction(int a, int b) {
    //конъюнкция, И (&)

    if (a == 1 && b == 1) return 1;
    else return 0;
}

int XOR(int a, int b){
    // ^

    if (a == b) return 0;
    else return 1; 
}

int equivalence(int a, int b){
    //эквивалентность (=)

    if (a == b) return 1;
    else return  0; 

}

int implication(int a, int b){
    //импликация (->)

    if (a == 1 && b == 0 ) return 0;
    else return 1; 
}

int coimplication(int a, int b){
    //компликация (<-)

    if (a == 1 && b == 0) return 1;
    else return 0; 

}

int peirces_arrow(int a, int b){
    //стрелка Пирса /

    if (a == 0 && b == 0) return 1;
    else return 0; 
}

int sheffer_stroke(int a, int b){
    //Штрих Шеффера #

    if (a == 1 && b == 1) return 0; 
    else return 1; 

}