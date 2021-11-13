var source = "sound.mp3";
var audio = document.createElement("audio");
// audio.setAttribute("src",source);
audio.loop = true;
audio.load();
// audio.autoplay = true;
audio.addEventListener("load", function(){
    audio.play();
}, true);
audio.src = source;