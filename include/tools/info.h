/**
 * @brief 生成一个给定类型ID
 * 
 * @param dest 储存ID的目标字符串
 * @param type ID类型，U-用户，G-商品，O-订单
 */
void genID(char* dest, char type);

/**
 * @brief 获取当前日期
 * 
 * @param dest 储存日期的目标字符串
 */
void getDate(char* dest);

#define print_header \
    printf("%s\n", divide);\
    printf("%s\n", header);\
    printf("%s\n", divide);

#define print_divide \
    printf("%s\n", divide);