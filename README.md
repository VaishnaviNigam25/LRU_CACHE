# LRU_CACHE
<h1> This is a DATA STRUCTURE Project focusing on the implementation of LRU CACHE in servers.</h1>
<hr>
<h4> A Least Recently Used (LRU) Cache organizes items in order of use, allowing you to quickly identify which item hasn't been used for the longest amount of time.</h4>
<h4>Under the hood, an LRU cache is often implemented by pairing a Doubly Linked List with a Hash Map.</h4>

<img src="https://www.interviewbit.com/blog/wp-content/uploads/2021/10/LRU-Cache.jpg" width="100%" height="300px" centered>

<h4>Strengths:
<ul>
  <li>
Super fast accesses. LRU caches store items in order from most-recently used to least-recently used. That means both can be accessed in O(1)O(1) time.</li>

<li>Super fast updates. Each time an item is accessed, updating the cache takes O(1)O(1) time.</li>
  </ul>
  </h4>
  
 <h3> Why Use A Cache?</h3>
<h5>Say you're managing a cooking site with lots of cake recipes. As with any website, you want to serve up pages as fast as possible.

When a user requests a recipe, you open the corresponding file on disk, read in the HTML, and send it back over the network. This works, but it's pretty slow, since accessing disk takes a while.

Ideally, if lots of users request the same recipe, you'd like to only read it in from disk once, keeping the page in memory so you can quickly send it out again when it's requested. Bam. You just added a cache.

A cache is just fast storage. Reading data from a cache takes less time than reading it from something else (like a hard disk).</h5>



<h3>The condition when the item is found in the Cache itself, is called <i>CACHE HIT</i>👈 </h3>
<img src="https://raw.githubusercontent.com/VaishnaviNigam25/LRU_CACHE/main/cache-hit.jpeg" width="400px" height="300px">

<h3>The condition when the storage capacity of cache has been exhausted, is called <i>CACHE FULL</i>👈 </h3>
<img src="https://raw.githubusercontent.com/VaishnaviNigam25/LRU_CACHE/main/cache-full.jpeg" width="400px" height="300px">


<h3>The condition when the item is not present in the Cache and should be searched from the hard disk, is called <i>CACHE MISS</i>👈 </h3>
<img src="https://raw.githubusercontent.com/VaishnaviNigam25/LRU_CACHE/main/cache-miss.jpeg" width="400px" height="300px">



