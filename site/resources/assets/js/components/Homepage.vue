<template>
    <div class="s">
        <vue-particles
        color="#fff"
        :particleOpacity="1"
        :particlesNumber="300"
        shapeType="circle"
        :particleSize="4"
        linesColor="#22264b"
        :linesWidth="1"
        :lineLinked="true"
        :lineOpacity="1"
        :linesDistance="150"
        :moveSpeed="1"
        :hoverEffect="false"
        hoverMode="grab"
        :clickEffect="true"
        clickMode="push">
        </vue-particles>
        <div class="row" style="position:absolute; padding-top:180px;">
            <div class="col-md-12">
                <vue-typer
                :text='["Welcome","Thank you for dropping by","Now, Lets build something great together"]'
                :repeat='0'
                :shuffle='false'
                initial-action='typing'
                :pre-type-delay='70'
                :type-delay='70'
                :pre-erase-delay='2000'
                :erase-delay='50'
                erase-style='backspace'
                :erase-on-complete='false'
                caret-animation='blink'
                ></vue-typer>
            </div>
        </div>
    </div>
</template>
<script>
import { VueTyper } from 'vue-typer'
    export default {
        mounted() 
        {
            this.show = true;
            console.log('Component mounted.')
        },
        data: function() 
        {
        return{
                show:false
            }
        },
        components: {
            VueTyper
        },

     } 
</script>
