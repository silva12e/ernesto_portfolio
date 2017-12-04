require('./bootstrap');
window.Vue = require('vue');
import VueParticles from 'vue-particles';
import Vue from 'vue';
import VeeValidate from 'vee-validate';

Vue.use(VeeValidate);
Vue.use(VueParticles);

Vue.component('homepage', require('./components/Homepage.vue'));
Vue.component('contact-info', require('./components/Contact.vue'));
Vue.component('about-me', require('./components/About.vue'));
Vue.component('my-projects', require('./components/Projects.vue'));

const app = new Vue({
    el: '#app'
});

