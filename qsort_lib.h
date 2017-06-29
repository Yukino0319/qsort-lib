//字符串仅按字符升序排序
int CmpStringInc(const void *a, const void *b){
    return strcmp((char *)a, (char *)b);
}

//字符串仅按字符降序排序
int CmpStringDesc(const void *a, const void *b){
    return strcmp((char *)b, (char *)a);
}

//字符串按长度升序排序，再按字符升序
int CmpStringLenInc(const void *a, const void *b){
    if(strlen((char *)a) == strlen((char*)b))
        return strcmp((char *)a, (char *)b);
    return strlen((char *)a) - strlen((char*)b);
}

//字符串按长度升序排序，再按字符降序
int CmpStringLenInc(const void *a, const void *b){
    if(strlen((char *)a) == strlen((char*)b))
        return strcmp((char *)b, (char *)a);
    return strlen((char *)a) - strlen((char*)b);
}

//字符串按长度降序排序，再按字符升序
int CmpStringLenInc(const void *a, const void *b){
    if(strlen((char *)a) == strlen((char*)b))
        return strcmp((char *)a, (char *)b);
    return strlen((char *)b) - strlen((char*)a);
}

//字符串按长度降序排序，再按字符降序
int CmpStringLenInc(const void *a, const void *b){
    if(strlen((char *)a) == strlen((char*)b))
        return strcmp((char *)b, (char *)a);
    return strlen((char *)b) - strlen((char*)a);
}

//int数组按升序排序
int CmpIntInc(const void *a, const void *b)  {  
    return *(int *)a - *(int *)b;  
}  

//int数组按降序排序
int CmpIntDesc(const void *a, const void *b)  {  
    return *(int *)b - *(int *)a;  
}  
