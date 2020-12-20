const ChangeDisplayOrientation = require("../src");

ChangeDisplayOrientation("180");

setTimeout(function() {
    ChangeDisplayOrientation("0");
}, 2000)
