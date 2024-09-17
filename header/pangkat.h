int pangkat (int x, int y){
    int z = 1;
    for(int i = 1; i <= y; i++){
        z *= x;
    }
    return z;
}