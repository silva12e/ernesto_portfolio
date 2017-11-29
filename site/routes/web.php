<?php

Route::get('/', function () {
    return view('pages.homepage');
});

Auth::routes();

Route::get('/home', 'HomeController@index')->name('home');

