int value(char c)
 {
    switch(c)
     {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
}

int romanToInt(char* s)
 {
    int result = 0;
    int i = 0;
    
    while (s[i] != '\0')
     {
        int currVal = value(s[i]);
        int nextVal = value(s[i + 1]);
        if (currVal < nextVal) 
        {
            result += (nextVal - currVal);
            i += 2; 
        }
        else {
            result += currVal;
            i++;
        }
    }
    return result;
}
