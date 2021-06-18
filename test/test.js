const {ChangeDisplaySettings} = require('../lib');

ChangeDisplaySettings.ChangeDisplayOrientation("180");

setTimeout(function() {
    ChangeDisplaySettings.ChangeDisplayOrientation("0");
}, 2000)
