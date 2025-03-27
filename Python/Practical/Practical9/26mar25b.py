# You're building a music playlist manager and need to merge two playlists into one sorted playlist. Write a Python function merge_and_sort_playlists (playlist1, playlist2) that takes two lists of songs as input, merges them into one list, and sorts the merged list alphabetically.
def merge_and_sort_playlist(playlist1,playlist2):
    merged_list=playlist1+playlist2
    return sorted(merged_list)
playlist1=['p_play','j_play']
playlist2=['c_play','d_play']
sorted_playlist=merge_and_sort_playlist(playlist1, playlist2)
print("Sorted Playlist",sorted_playlist)