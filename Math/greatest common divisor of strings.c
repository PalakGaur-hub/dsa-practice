bool check(char *str, char *pat) {
    int len1 = strlen(str);
    int len2 = strlen(pat);
    if (len1 % len2 != 0)
        return false;
    for (int i = 0; i < len1; i++) {
        if (str[i] != pat[i % len2])
            return false;
    }
    return true;
}
char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int minLen = (len1 < len2) ? len1 : len2;
    for (int i = minLen; i >= 1; i--) {
        if (len1 % i != 0 || len2 % i != 0)
            continue;
        char *temp = (char*)malloc((i + 1) * sizeof(char));
        strncpy(temp, str1, i);
        temp[i] = '\0';
        if (check(str1, temp) && check(str2, temp))
            return temp;
        free(temp);
    }
    return "";
}
