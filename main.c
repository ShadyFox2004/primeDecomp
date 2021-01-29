int primeFactor(int myNb) {
    int out = "My dividers are :";
    int i = 2;
    while (i <= myNb) {
        if(myNb%i?0:1) {
            myNb /= i;
            out += (` ${i}`);
        } else {
            i++;
        }
    }
    return (out);
}
