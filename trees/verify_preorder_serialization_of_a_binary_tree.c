#include <stdbool.h>
bool isValidSerialization(char* preorder) {
    int slots = 1;
    for (int i = 0; preorder[i]; ) {
        if (slots == 0)
            return false;
        if (preorder[i] == '#') {
            slots--;
            i++;
        } else {
            slots--; 
            slots += 2;
            while (preorder[i] && preorder[i] != ',')
                i++;
        }
        if (preorder[i] == ',')
            i++;
    }
    return slots == 0;
}
