/**
 * Class used to change display settings
 */
export class ChangeDisplaySettings {
    /**
     * Method used to change screen orientation
     *
     * @param orientation ScreenOrientation Screen orientation that will apply
     */
    static ChangeDisplayOrientation(orientation: ScreenOrientation): void {
        const _ChangeDisplaySettings = require('../build/Release/change-display-settings-native');
        _ChangeDisplaySettings.ChangeDisplayOrientation(orientation);
    }
}

/**
 * Type of screen orientation
 */
export type ScreenOrientation = '0' | '180';
