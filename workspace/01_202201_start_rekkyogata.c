#include <stdio.h>
enum Status {
    INSERT,
    UPDATE,
    DELETE
};
int main(void){
    // Your code here!
    enum Status status = UPDATE;
    switch (status){
        case INSERT:
            printf("登録します\n");
            break;
        case UPDATE:
            printf("更新します\n");
            break;
        case DELETE:
            printf("削除します\n");
            break;
    }
    printf("status=%d\n", status);
    return 0;
}
