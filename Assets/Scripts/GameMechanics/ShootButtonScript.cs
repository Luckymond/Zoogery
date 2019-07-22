using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootButtonScript : MonoBehaviour
{
    static Transform projectileSpawn;
    public GameObject spawnFromGameObject;
    public GameObject projectile;
    public float nextFire = 0.5f;
    public float currentTime = 0.0f;
    public AudioClip shootSound;
    public float volume = 0.5f;
    private AudioSource source; 
    // Start is called before the first frame update
    void Start()
    {
        projectileSpawn = spawnFromGameObject.transform;
        source = this.GetComponent<AudioSource>();

    }

    // Update is called once per frame
    void Update()
    {
        currentTime += Time.deltaTime;
    }
    public void shoot()
    {

        if (currentTime > nextFire)
        {
            source.PlayOneShot(shootSound, volume);
            nextFire += currentTime;
            Instantiate(projectile, projectileSpawn.position, projectileSpawn.transform.rotation);
            nextFire -= currentTime;
            currentTime = 0.0f;
        }
    }

}
