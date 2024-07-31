function triangulo(format){
    let value = format;
    for (let i = 0; i < 10; i++) {
        console.log(value);
        value += format
    }
    value = format;

    for (let i = 1; i < 10; i++) {
        value += format;
    }

    do{
        console.log(value);
        value = value.substring(0, value.length - 1);
    }
    while (value.length > 0)
        
}

triangulo('*');