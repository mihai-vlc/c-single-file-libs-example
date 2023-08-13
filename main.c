#define STB_DS_IMPLEMENTATION
#include "lib/stb_ds.h"
#include <stdio.h>

#define print(format, ...) printf(format "\n", ##__VA_ARGS__)

typedef struct {
    char *key;
    int value;
} NameAgeMap;

int main() {

    int *nums = NULL;

    arrpush(nums, 44);
    arrpush(nums, 45);
    arrpush(nums, 46);

    print("Numbers:");
    for (size_t i = 0; i < arrlen(nums); i++) {
        printf("%d ", nums[i]);
    }

    print();
    print();

    NameAgeMap *userInfo = NULL;

    shput(userInfo, "mihai", 30);
    shput(userInfo, "alex", 25);
    shput(userInfo, "george", 20);

    print("mihai is %d years old", shget(userInfo, "mihai"));
    print("There are %d records in the hash map.", shlen(userInfo));

    print("Searching for 'dan' in the hash map: %d", shgeti(userInfo, "dan"));
    print("Searching for 'george' in the hash map: %d", shgeti(userInfo, "george"));

    print("List all the keys and values:");
    for (size_t i = 0; i < shlen(userInfo); i++) {
        print("%s = %d", userInfo[i].key, userInfo[i].value);
    }

    print("Finish nice text 🚀🚀");

    arrfree(nums);
    shfree(userInfo);

    return 0;
}
