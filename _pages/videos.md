---
layout: inner
title: Videos
permalink: /videos/
---
{% for video in site.data.videos.links %}

<center>
<h2>{{ video.title }}</h2>
<iframe width="560" height="315" src="https://www.youtube.com/embed/{{ video.id }}" frameborder="0" allowfullscreen></iframe>
</center>
{% endfor %}