function pushZerosToEnd(arr){
    let n = arr.length;

    let temp = [];
    let j = 0;

    for(let i = 0; i < n; i++){
        if(arr[i] != 0){
            temp[j] = arr[i];
            j++;
        }
    }

    while(j < n){
        temp[j] = 0;
        j++;
    }

    for(let i = 0; i < n; i++){
        arr[i] = temp[i];
    }

    return arr;
}

let arr = [1, 2, 0, 4, 3, 0, 5, 0];
console.log(pushZerosToEnd(arr));