let images = ["https://media.istockphoto.com/id/1214517477/photo/elegant-young-couple-of-ballroom-dancers-in-red-dress-in-suit-dancing-on-white.jpg?s=1024x1024&w=is&k=20&c=QmzDS8Lp5oO2VdO0Yp035MU1eGI1BZM77j76f_rHuK0=", "https://www.danceinforma.com/wp-content/uploads/2018/06/LJD.jpg", "https://multiarena.no/wp-content/uploads/2021/01/dancedeck-dancers.jpg.webp"]
function hello(){
    document.getElementById("title").innerHTML = "Hello World!"
}
count = 0
function change(){
    document.getElementById("img").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
}
function highlight(){
    document.getElementById("btn").style.backgroundColor = "orange"
    document.getElementById("btn").style.color = "white"
}
function normal(){
    document.getElementById("btn").style.backgroundColor = "gray"
    document.getElementById("btn").style.color = "black"
}
function show(){
    document.getElementById("hidden").style.display = "block"
}