<?php

Route::get('/', 'PageController@getHome');
Route::get('/about-me', 'PageController@getAbout');
Route::get('/projects', 'PageController@getProjects');
Route::get('/contact-information', 'PageController@getContact');

Auth::routes();
Route::get('/home', 'HomeController@index')->name('home');

