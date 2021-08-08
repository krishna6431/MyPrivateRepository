// code is written by krishna 
document.getElementById("output").style.display = "none";
function show()
{
  document.getElementById("button").hidden = true;
  document.getElementById("output").style.display = "flex";
  document.getElementById("heading").innerHTML = "Browser Info"
  var output="";
  output +="Name: "+navigator.appName+"<br>";
  output +="Version: "+navigator.appVersion  +"<br>";
  output +="Codename: " +navigator.appCodeName  +"<br>";
  output +="Cookie enable: "+navigator.cookieEnabled  +"<br>";
  output +="Java Enable: "+navigator.javaEnabled  +"<br>";
  output +="Mime type: "+navigator.mimeTypes  +"<br>";
  output +="Platform: "+navigator.platform  +"<br>";
  output +="Plugins: "+navigator.plugins  +"<br>";
  output +="System Language: "+navigator.systemLanguage  +"<br>";
  output +="User language: "+navigator.userAgent  +"<br>";
  output +="User Agent: "+navigator.userAgent  +"<br>";
  document.getElementById("output").innerHTML = output;
}

document.getElementById("copyright").innerHTML = "Copyright © Krishna. All Rights Reserved."