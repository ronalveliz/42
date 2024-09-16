
int ft_strlen(char *c){
    int len;
    len = 0;
    while (c[len] != '\0')
    {
        len ++;
    }
    return len;
}
