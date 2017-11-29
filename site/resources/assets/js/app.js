require('./bootstrap');

window.Vue = require('vue');

import VueParticles from 'vue-particles';

Vue.use(VueParticles);

Vue.component('homepage', require('./components/Homepage.vue'));

const app = new Vue({
    el: '#app'
});
