import pygame

class Number(pygame.sprite.Sprite):
    def __init__(self, surface, x, y):
        pygame.sprite.Sprite.__init__(self)
        self.image = surface
        self.rect = self.image.get_rect()
        self.rect.center = (x, y)