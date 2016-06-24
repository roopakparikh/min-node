'use strict';
const common = require('../common');

const constants = require('constants');
const assert = require('assert');
const fs = require('fs');
const path = require('path');

common.refreshTmpDir();

// O_WRONLY without O_CREAT shall fail with ENOENT
const pathNE = path.join(common.tmpDir, 'file-should-not-exist');
assert.throws(
  () => fs.openSync(pathNE, constants.O_WRONLY),
  (e) => e.code === 'ENOENT'
);
