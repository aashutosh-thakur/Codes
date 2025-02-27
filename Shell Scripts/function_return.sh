function greeting(){

str="Hello, $name"
echo $str

}

echo "Enter Your Name: "
read name

val=$(greeting)
echo "Return Value of the function is $val"

