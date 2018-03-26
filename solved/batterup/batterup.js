var b = readline();
var bats = parseInt(b);
var line = readline().split(' ');
var num = 0, den = 0;
var n = 0;
var temp;
for(n = 0; n < bats; n++){
	temp = parseInt(line[n]);
	if(temp >=0 ){
		num += temp;
		den++;
	}
}
print(num / den);