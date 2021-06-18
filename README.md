# CHANGE-DISPLAY-SETTINGS-NATIVE
[![npm](https://img.shields.io/npm/v/@dov118/change-display-settings-native)](https://www.npmjs.com/package/@dov118/change-display-settings-native)
[![license](https://img.shields.io/npm/l/@dov118/change-display-settings-native)](https://github.com/@dov118/change-display-settings-native/blob/master/LICENSE)
<img src="https://img.shields.io/npm/dt/@dov118/change-display-settings-native" alt="Downloads" />
<img src="https://img.shields.io/node/v/@dov118/change-display-settings-native" alt="Node version" />

Change-display-settings-native is a library for change windows display settings using node

## Table of Contents
- [How to get it ?](#how-to-get-it-)
- [How to use it ?](#how-to-use-it-)

### How to get it ?

```shell
npm i @dov118/change-display-settings-native
```

### How to use it ?
- JavaScript
```javascript
const {ChangeDisplaySettings} = require('@dov118/change-display-settings-native');

ChangeDisplaySettings.ChangeDisplayOrientation("180");
```

- TypeScript
```typescript
import {ChangeDisplaySettings} from "@dov118/change-display-settings-native";

ChangeDisplaySettings.ChangeDisplayOrientation("180");
```
